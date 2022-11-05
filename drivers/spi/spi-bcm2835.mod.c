#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0xb92873bd, "param_ops_uint" },
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x4829a47e, "memcpy" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x53ef1071, "spi_finalize_current_transfer" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x73053428, "dev_err_probe" },
	{ 0x18030d6c, "debugfs_create_u64" },
	{ 0xb137a4c8, "debugfs_create_dir" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3332974e, "spi_register_controller" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0x815f2897, "empty_zero_page" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0x165cfc64, "dma_request_chan" },
	{ 0xcaa8f6b0, "__of_get_address" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x933feb8b, "platform_get_irq" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x6256f54b, "devm_clk_get" },
	{ 0x175807a4, "devm_platform_ioremap_resource" },
	{ 0xd5b9bcf9, "__devm_spi_alloc_controller" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xd30dfa9, "spi_unregister_controller" },
	{ 0x85a8f9d1, "debugfs_remove" },
	{ 0x942cefb4, "dma_release_channel" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x56470118, "__warn_printk" },
	{ 0x4be2b06b, "dev_driver_string" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x584b154, "dma_map_page_attrs" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x6b3996a5, "gpiochip_request_own_desc" },
	{ 0x1f56c61c, "gpiochip_find" },
	{ 0x285af5d2, "dma_sync_single_for_device" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x432ef100, "dma_get_slave_caps" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x73534824, "dma_unmap_page_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0x995e50b6, "spi_split_transfers_maxsize" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-spi");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-spiC*");

MODULE_INFO(srcversion, "76B9E825743BD9406356BAA");
