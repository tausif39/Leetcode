class BSTIterator
    def initialize(root)
      @node = root
      @stack = []
      
	  # push left node into the stack iteratively
      while @node
        @stack << @node
        @node = @node.left
      end
    end

    # pop one node out and return its value
	# at the same time push all left nodes of its right node iteratively
    def next()
      @node = @stack.pop
      val = @node.val
      
      if @node.right
        @node = @node.right
        while @node
          @stack << @node
          @node = @node.left
        end
      end
      
      val
    end

    # check if there is a node on the top of the stack
    def has_next()
      !@stack[-1].nil?
    end
end